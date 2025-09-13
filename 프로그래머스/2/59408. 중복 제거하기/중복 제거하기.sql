-- 코드를 입력하세요
SELECT count(DISTINCT name) as count
FROM ANIMAL_INS
WHERE name is not null;