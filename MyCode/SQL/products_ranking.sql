WITH ranked_products AS(
SELECT 
product_category, 
product_name, 
unit_price, 
ROW_NUMBER() OVER (PARTITION BY product_category ORDER BY unit_price DESC) AS row_num 
FROM product_catalog
)
SELECT * FROM ranked_products
WHERE row_num = '1'
ORDER BY product_category