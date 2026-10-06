SELECT esc.customer_id, esc.customer_name, SUM(esc.net_sales) AS total_sales,
CASE 
WHEN SUM(net_sales) > 10000 THEN 'VIP'
WHEN SUM(net_sales) > 5000 THEN 'HIGH'
WHEN SUM(net_sales) > 2000 THEN 'MEDIUM'
WHEN SUM(net_sales) > 1000 THEN 'LOW'
WHEN SUM(net_sales) > 0 THEN 'VERY LOW'
ELSE 'NO PURCHASE'
END AS Segment
FROM public.ecommerce_sales_customers esc
LEFT JOIN public.customer_master cm 
    ON cm.customer_id = esc.customer_id
GROUP BY esc.customer_id, esc.customer_name
ORDER BY total_sales DESC NULLS LAST

