SELECT COUNT(ID) as FISH_COUNT
FROM FISH_INFO
WHERE LENGTH <= 10 OR LENGTH IS NULL