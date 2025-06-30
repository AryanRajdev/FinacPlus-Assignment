Q3. Imagine you work for amazon, what is the Meta data information you will store for
    an item in your Database. For E.g. the item is a shirt, once you have stored the Meta
    data how will use the information?


-> Metadata for a Shirt on Amazon

Item Name – For example, "Men's Cotton T-shirt".

Brand Name – So customers can search or filter by brand.

Price – Current selling price of the shirt.

Size – Like S, M, L, XL etc.

Color – Example: Black, White, Blue.

Material – Cotton, polyester, or a blend.

Category – Like Clothing → Men → T-shirts.

Stock Quantity – To know how many pieces are available.

Product Description – A short write-up about the shirt.

Images – Photos of the shirt from different angles.

Rating and Reviews – What customers have rated it and said.

Seller Info – Who is selling the shirt (Amazon or a third-party seller).

Is it returnable? – Important for customers before buying.

Date Added – When the item was listed on the site.


<pre>
```json
{
  "itemName": "Men's Cotton T-shirt",
  "brand": "ExampleBrand",
  "price": 499,
  "currency": "INR",
  "sizes": ["S", "M", "L", "XL","XXL"],
  "color": "Black",
  "material": "Cotton",
  "category": ["Clothing", "Men", "T-shirts"],
  "stockQuantity": 120,
  "description": "Soft 100% cotton t-shirt.",
  "images": [
    "https://amazon.com/images/1",
    "https://amazon.com/images/2"
  ],
  "rating": 4.3,
  "numberOfReviews": 278,
  "seller": {
    "sellerName": "BestSeller Pvt Ltd",
    "fulfilledByAmazon": true
  },
  "returnable": true,
  "dateAdded": "06-07-2024"
}
```
</pre>


-> How this metadata helps:

Helps customers search and filter easily. For example, if someone wants only black cotton shirts, we can use the color and material fields.

Makes it easier to show similar or recommended products.

Amazon can check stock levels and make sure items are available for delivery.

Based on ratings and reviews, we can improve or promote the best items.

Helps in sorting (like low-to-high price or highest rated).