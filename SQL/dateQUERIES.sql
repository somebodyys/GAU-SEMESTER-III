SELECT GETDATE() AS currentDate

SELECT DAY(GETDATE()) currentDAY

SELECT MONTH(GETDATE()) currentMonth

SELECT YEAR(GETDATE()) currentYear

SELECT DATENAME(MONTH, GETDATE()) fullMonth

SELECT DATEPART(month, GETDATE()) monthInNumber

SELECT DATEADD(month, 2, '2020-6-7')

SELECT DATEADD(day, 5, GETDATE())

SELECT DATEDIFF(year, '1997-10-27', GETDATE())

SELECT DATEDIFF(DAY, GETDATE(), '2021-5-10') inDays


USE khinkaliHouse
SELECT LEFT(name,3) AS firstThreeLetters
FROM Meals

SELECT RIGHT(name,3) AS lastThreeLetters
FROM Meals

SELECT LEN(name) AS lengthOFName
FROM Meals

SELECT REPLACE('tbilisi', 'i', '&')

SELECT UPPER('tornike')

SELECT LOWER('TORNIKE')