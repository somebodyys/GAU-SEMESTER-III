SELECT *
FROM author
WHERE f_name = 'Ben'

SELECT l_name AS LastName
FROM author
WHERE l_name LIKE '%e%'

SELECT price
FROM book
WHERE price BETWEEN 14 AND 30;


SELECT price
FROM book
ORDER BY price DESC


SELECT book_name, price
FROM book
WHERE author_id IN ('1', '3')


SELECT *
FROM book b
INNER JOIN genre ge ON b.genre_id = ge.genre_id



SELECT book_name, ge.genre_id
FROM book b
INNER JOIN genre ge ON b.genre_id = ge.genre_id
WHERE book_name LIKE 'The%'


SELECT b.book_name, ge.name, ga.name
FROM book b
INNER JOIN genre ge ON b.genre_id = ge.genre_id
INNER JOIN gamomcemloba ga ON b.gamomcemloba_id = ga.gamomcemloba_id