WITH top_clients AS (
SELECT customer_id, customer_name, customer_city, SUM(net_sales) AS total FROM public.ecommerce_sales_customers
GROUP BY customer_id, customer_name, customer_city
ORDER BY customer_city
),
ranked_top_clients AS (
    SELECT customer_id, customer_name, customer_city, total, ROW_NUMBER() OVER(PARTITION BY customer_city ORDER BY total DESC) AS rank FROM top_clients
    GROUP BY customer_city, customer_id, customer_name, total
)
SELECT * FROM ranked_top_clients
WHERE rank IN(1, 2, 3)
ORDER BY customer_city, rank ASC