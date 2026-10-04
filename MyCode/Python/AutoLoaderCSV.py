import csv
with open('C:/Users/Макс/Documents/MyCode/SQL/Data Files/ecommerce_sales_customer_analytics_150k.csv') as f: 
    reader = csv.reader(f)
    headers = next(reader)
    for h in headers:
        print(f"{h} TEXT,")