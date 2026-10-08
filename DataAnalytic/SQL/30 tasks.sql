--ЗАДАЧА 1. Выведи всех клиентов из Германии (`customer_country = 'Germany'`)
SELECT customer_id, customer_name FROM customer_master
WHERE customer_country = 'Germany'
ORDER BY customer_id
--ЗАДАЧА 2. Найди средний возраст клиентов по каждому сегменту (`customer_segment`).
SELECT customer_segment,ROUND(AVG(customer_age), 2) AS average_age FROM customer_master
GROUP BY customer_segment
ORDER BY average_age ASC
--ЗАДАЧА 3. Выведи топ-10 городов по количеству клиентов.
SELECT customer_city, COUNT(customer_id) AS total_customers FROM customer_master
GROUP BY customer_city
ORDER BY total_customers DESC
LIMIT 10
--ЗАДАЧА 4. Посчитай, сколько заказов было сделано через каждый канал продаж (`sales_channel`).
SELECT COUNT(order_id) AS total_orders, sales_channel FROM ecommerce_sales_customers
GROUP BY sales_channel
ORDER BY total_orders ASC
--ЗАДАЧА 5. Найди все товары из категории `Electronics` дороже 500. Выведи название, бренд и цену. 
SELECT product_name, brand, unit_price FROM product_catalog
WHERE product_category = 'Electronics' AND unit_price > 500
ORDER BY unit_price ASC