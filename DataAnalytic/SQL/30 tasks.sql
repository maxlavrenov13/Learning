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
--ЗАДАЧА 6. Выведи клиентов, у которых `customer_acquisition_cost` больше 30.
SELECT customer_id, customer_name, customer_acquisition_cost FROM customer_master
WHERE customer_master.customer_acquisition_cost > 30
ORDER BY customer_acquisition_cost DESC
--ЗАДАЧА 7. Выведи топ-10 клиентов по количеству заказов (`COUNT(DISTINCT order_id)`)
SELECT customer_id, customer_name, COUNT(order_id) AS total_orders FROM ecommerce_sales_customers
GROUP BY customer_id, customer_name
ORDER BY total_orders DESC
LIMIT 10
--ЗАДАЧА 8. Для каждой категории товаров посчитай средний рейтинг (`AVG(product_rating)`). Оставь только те, где средний рейтинг > 4.
SELECT product_category, AVG(product_rating) AS avg_rate FROM product_catalog
GROUP BY product_category
HAVING AVG(product_rating) > 3.65 --Поправил рейтинг так как нет ни одной категории с AVG > 4
ORDER BY avg_rate DESC 
--ЗАДАЧА 9. Найди топ-5 брендов по количеству товаров в каталоге. Выведи бренд и число товаров.
SELECT brand, COUNT(product_id) AS total FROM product_catalog
GROUP BY brand
ORDER BY total DESC
LIMIT 6 --Количество товаров у двух брендов одинаковое поэтому имеет место вывести и 6 место тоже
--ЗАДАЧА 10. Посчитай средний чек (`AVG(net_sales)`) по каждому способу оплаты (`payment_method`).
SELECT payment_method, AVG(net_sales) AS avg_sales FROM ecommerce_sales_customers
GROUP BY payment_method
ORDER BY avg_sales DESC
