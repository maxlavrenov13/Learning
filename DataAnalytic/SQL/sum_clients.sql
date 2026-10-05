SELECT customer_id, order_date, net_sales, SUM(net_sales) OVER(PARTITION BY customer_id ORDER BY order_date) FROM public.ecommerce_sales_customers
