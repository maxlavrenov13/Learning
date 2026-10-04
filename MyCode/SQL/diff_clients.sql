WITH previous AS(
SELECT customer_name, customer_id, order_id, order_date, net_sales, LAG(net_sales) OVER(PARTITION BY customer_id ORDER BY order_date) AS prev_sale FROM public.ecommerce_sales_customers
)
SELECT customer_name, customer_id, order_id, order_date, net_sales, net_sales, prev_sale, net_sales - prev_sale AS difference
FROM previous
ORDER BY customer_id, order_date