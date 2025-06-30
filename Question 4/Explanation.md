1. Price Feed APIs (Source of Truth for Prices)
 -> External APIs from stock markets (e.g., NSE, BSE) or mutual funds 
 -> It Provides the latest prices every few minutes.

2. Price Fetcher
 -> A background service that fetches prices from these API's every 10 minutes
 -> Next: It pushes this new price data into the Message Queue.

3. Message Queue (MQ)
 -> It's a holding place for jobs to process.
 -> It is used So the fetcher doesn’t get blocked and everything can happen asynchronously.
 -> Sends new price data to the Portfolio Update Worker.

4. Portfolio Update Worker (Recalculator)
 -> A service that recalculates user portfolios based on price changes
 -> For every user who holds a stock/fund whose price changed:
    -> Recalculate total value
    -> Next: It updates both the databases

5. PostgreSQL (Portfolio Store)
 -> My main reliable database (permanent storage).
 -> It stores all user portfolios like history of assets, values, etc.
 -> It is used for reporting, auditing, backup

6. Redis Cache
 -> A fast in-memory database
 -> It stores the latest snapshot of a user’s portfolio , So the user can see updated values instantly.

7. WebSocket Server
 -> A live connection handler that keeps talking to all logged-in users.
 -> Whenever a portfolio changes (due to price update): it sends the new portfolio to that specific user
 -> This is what enables true real-time.

8. Backend API Server
 -> Handles normal HTTP requests (login, logout, profile, etc.)
 -> It is not for real-time updates, but still important for auth & initial load.

9. Frontend (App / Website)
 -> Shows the user their live portfolio
 -> Opens a WebSocket connection
 -> Listens for new updates and updates the screen instantly.