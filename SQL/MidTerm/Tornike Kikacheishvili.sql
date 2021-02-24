use shekvetebi

--1
SELECT Sname, Code
FROM SalesPeople

--2
SELECT *
FROM Customers
WHERE Rating BETWEEN 70 AND 100

--3
SELECT Snum, COUNT(Onum) AS TotalOrders 
FROM Orders
GROUP BY Snum

--4
SELECT Sname
FROM SalesPeople
WHERE Town = 'tbilisi'

--5
SELECT *
FROM SalesPeople
WHERE Town IN ('tbilisi', 'batumi')

--6
SELECT *
FROM Customers
WHERE Cname LIKE 'n%'

--7
SELECT *
FROM Customers
WHERE Rating LIKE '_2%'

--8
SELECT *
FROM Customers
WHERE Rating IS NULL

--9
SELECT SUM(Amount) AS Total
FROM Orders

--10
SELECT Snum, MAX(Amount) AS Maximum
FROM Orders
GROUP BY Snum

--11
SELECT *
FROM SalesPeople sa
INNER JOIN Customers cu ON sa.Snum = cu.Snum
WHERE sa.Town = cu.Town


--12
DELETE FROM Customers
WHERE Cnum = 6

--13
UPDATE SalesPeople
SET Code = 66
WHERE Snum = 2

--14
SELECT Cname
FROM Orders ord
RIGHT JOIN Customers cu ON ord.Cnum = cu.Cnum
WHERE Onum IS NULL

--15
SELECT cu.Cname, ord.O_Date
FROM Customers cu
INNER JOIN Orders ord ON cu.Cnum = ord.Cnum

--16
SELECT sa.Sname, ord.Onum, ord.Amount, ord.O_Date
FROM SalesPeople sa
INNER JOIN Orders ord ON sa.Snum = ord.Snum

