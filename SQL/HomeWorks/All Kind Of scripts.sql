USE khinkaliHouse

SELECT *
FROM Chefs
WHERE sallary > 1500


SELECT f_name, l_name
FROM Chefs
WHERE l_name LIKE N'%ლი'

SELECT DISTINCT ch.f_name, ch.l_name
FROM CheffClasses cc
INNER JOIN Chefs ch ON ch.chefID = cc.chefID

SELECT f_name, l_name, age
FROM Chefs
WHERE age BETWEEN 30 AND 60


SELECT me.name, mt.typeName
FROM Meals me
INNER JOIN MealType mt ON me.type = mt.typeID
WHERE mt.typeName IN ('Vegetarian', 'Vegan')



SELECT SUM(sallary) AS total
FROM Chefs


SELECT TOP 3 *
FROM Meals
ORDER BY price DESC

SELECT AVG(price) AS avaragePrice
FROM Meals

SELECT ClassName, count(ClassName) ClassCount
FROM Meals me
INNER JOIN MealClasses mc ON mc.CategoryID = me.Class
GROUP BY ClassName


SELECT f_name, COUNT(f_name)
FROM CheffClasses cc
INNER JOIN Chefs ch ON cc.chefID = ch.chefID
INNER JOIN MealClasses mc ON cc.ClassID = mc.CategoryID
GROUP BY f_name

SELECT MAX(age) Oldest
FROM Chefs


SELECT me.name, ClassName, me.desctibtion
FROM MealClasses mc
LEFT JOIN Meals me ON mc.CategoryID = me.Class
WHERE MealID IS NOT NULL


SELECT ClassName, f_name, l_name
FROM MealClasses mc
LEFT JOIN CheffClasses cc ON cc.ClassID = mc.CategoryID
INNER JOIN Chefs ON Chefs.chefID = cc.chefID


SELECT typeName
FROM MealType
LEFT JOIN Meals ON Meals.type = MealType.typeID
WHERE MealID IS NULL

SELECT ClassName,COUNT(ClassName) AS ChefCount
FROM MealClasses mc
LEFT JOIN CheffClasses cc ON cc.ClassID = mc.CategoryID
INNER JOIN Chefs ON Chefs.chefID = cc.chefID
GROUP BY ClassName

SELECT ClassName,COUNT(ClassName) AS ChefCount
FROM MealClasses mc
LEFT JOIN CheffClasses cc ON cc.ClassID = mc.CategoryID
INNER JOIN Chefs ON Chefs.chefID = cc.chefID
GROUP BY ClassName
HAVING ClassName LIKE 'S%'


SELECT workedDate, f_name, l_name
FROM WorkingHistory wh
INNER JOIN Chefs cf ON cf.chefID = wh.chefID

SELECT UPPER(DATENAME(MONTH, workedDate)) workedMonth, f_name, l_name
FROM WorkingHistory wh
INNER JOIN Chefs cf ON cf.chefID = wh.chefID

SELECT f_name, l_name, YEAR(DATEADD(YEAR, -age, GETDATE())) birthYear
FROM Chefs

SELECT TOP 3 f_name, l_name, DATEDIFF(DAY, workedDate, GETDATE()) dayPassed
FROM WorkingHistory wh
INNER JOIN Chefs cf ON cf.chefID = wh.chefID
ORDER BY dayPassed

SELECT desctibtion, LEN(desctibtion) charLength
FROM Meals
ORDER BY charLength


SELECT desctibtion, RIGHT(desctibtion, LEN(desctibtion)/2) halfRightText
FROM Meals

SELECT LOWER(desctibtion) describtion,	UPPER(LEFT(desctibtion, LEN(desctibtion)/2)) halfLefttText
FROM Meals


SELECT f_name, l_name, CONVERT(nvarchar(20), workedDate,  106) as WorkedDate
FROM WorkingHistory
INNER JOIN Chefs ON Chefs.chefID = WorkingHistory.chefID

SELECT name, FORMAT(price, 'C', 'ka') price
FROM Meals

SELECT f_name, l_name
FROM chefNamesClasses
WHERE ClassName = 'MainDishes'

SELECT *
FROM mealsClassTypes
WHERE typeName IN ('Vegetarian', 'Vegan') OR ClassName = 'MainDishes'


SELECT ClassName, COUNT(name) MenuVariety
FROM mealsClassTypes
GROUP BY ClassName

SELECT f_name, COUNT(workedDate) TotalDaysWorked
FROM WorkedCheffContact
GROUP BY f_name

SELECT DISTINCT f_name, l_name
FROM WorkedCheffContact
WHERE phone IS NULL


SELECT name, FORMAT(price, 'C', 'ka') price, FORMAT(tax/100, 'p') tax, FORMAT((price * (100 + tax)/100), 'C','ka') total
FROM MealCostData
WHERE tax < 10 OR tax = 18


UPDATE Chefs
SET f_name = 'დათო'
WHERE chefID = 4;