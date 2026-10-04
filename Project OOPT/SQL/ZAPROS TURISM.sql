CREATE TABLE public.turoperators (
    item_href TEXT,
    reg_number TEXT,
    name TEXT,
    address TEXT
);

COPY public.turoperators
FROM 'E:\doc\ev.csv'
WITH (FORMAT csv, HEADER true);

SELECT name, address
FROM public.turoperators
WHERE name ILIKE '%заповедник%'
   OR name ILIKE '%национальный парк%';