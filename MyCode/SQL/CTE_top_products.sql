WITH total_sum AS (
    SELECT product_id, SUM(profit) AS total_profit FROM order_items oi
    GROUP BY product_id
), 
top_positions AS(
    SELECT product_name, total_sum.product_id, total_sum.total_profit FROM product_catalog pc
    JOIN total_sum ON total_sum.product_id = pc.product_id
)
SELECT product_name, total_profit FROM top_positions
ORDER BY total_profit DESC
LIMIT 250