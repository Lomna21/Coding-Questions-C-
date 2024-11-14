CREATE DATABASE ORG;
SHOW DATABASES;
USE ORG;
--> Defining columns for new created table.
CREATE TABLE Worker (
    WORKER_ID INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    FIRST_NAME CHAR(25),
    LAST_NAME CHAR(25),
    SALARY INT(15),
    JOINING_DATE DATETIME,
    DEPARTMENT CHAR(25)
);

--> Inserting values into newly created table.
INSERT INTO Worker 
    (WORKER_ID, FIRST_NAME, LAST_NAME, SALARY, JOINING_DATE, DEPARTMENT) VALUES
        (001, 'Monika', 'Arora', 100000, '14-02-20 09.00.00', 'HR'),
        (002, 'Niharika', 'Verma', 80000, '14-06-11 09.00.00', 'Admin'),
        (003, 'Vishal', 'Singhal', 300000, '14-02-20 09.00.00', 'HR'),
        (004, 'Amitabh', 'Singh', 500000, '14-02-20 09.00.00', 'Admin'),
        (005, 'Vivek', 'Bharti', 500000, '14-06-11 09.00.00', 'Admin'),
        (006, 'Vipul', 'Diwan', 200000, '14-06-11 09.00.00', 'Account'),
        (007, 'Satish', 'Kumar', 75000, '14-01-20 09.00.00', 'Account'),
        (008, 'Geetika', 'Chauhan', 90000, '14-04-11 09.00.00', 'Admin');
        
SELECT * FROM Title;
CREATE TABLE Bonus (
    WORKER_REF_ID INT,
    BONUS_AMOUNT INT(10),
    BONUS_DATE DATETIME,
    FOREIGN KEY (WORKER_REF_ID)
        REFERENCES Worker(WORKER_ID)  -- This specifies that the foreign key WORKER_REF_ID references the WORKER_ID column in the Worker table. This establishes a relationship between the Bonus table and the Worker table.
        ON DELETE CASCADE    -- This specifies that if a row in the Worker table is deleted, all corresponding rows in the Bonus table that reference the deleted WORKER_ID will also be automatically deleted. This is known as a cascading delete.
);
WHERE --> used to filter records that meets specific conditions.
BETWEEN --> used to filter the result set within a specified range.
1. AS --> used to rename a column or a table with an alias making the output more readable and easier to understand.
2. UPPER() --> gives data in upper case
3. distinct --> gives unique values from the table
4. substring(string, start position, length) --> used to extract the portion of string
5. INSTR(string, substring) --> used to find the position of a substring within a string. It returns position of the first occurrence of the specified substring. If the substring is not found it returns 0.
6. RTRIM(string) --> used to remove trailing spaces from the right end of a string. This can be particularly useful for cleaning up data and ensuring consistency in text files where trailing spaces might be introduces during data entry or processing.
7. LTRIM(string) --> used to remove leading spaces from the left end of a string.



-- Q-1. Write an SQL query to fetch “FIRST_NAME” from Worker table using the alias name as <WORKER_NAME>.
select first_name AS WORKER_NAME from worker;
-- Q-2. Write an SQL query to fetch “FIRST_NAME” from Worker table in upper case.
select UPPER(first_name) from worker;
-- Q-3. Write an SQL query to fetch unique values of DEPARTMENT from Worker table.
SELECT distinct department from worker;
-- Q-4. Write an SQL query to print the first three characters of  FIRST_NAME from Worker table.
select substring(first_name, 1, 3) from worker;
-- Q-5. Write an SQL query to find the position of the alphabet (‘b’) in the first name column ‘Amitabh’ from Worker table.
select INSTR(first_name, 'B') from worker where first_name = 'Amitabh';
-- Q-6. Write an SQL query to print the FIRST_NAME from Worker table after removing white spaces from the right side.
select RTRIM(first_name) from worker;
-- Q-7. Write an SQL query to print the DEPARTMENT from Worker table after removing white spaces from the left side.
select LTRIM(first_name) from worker;
8. LENGTH(string) --> used to return number of characters in a string
9. REPLACE(string, old_substring, new_substring) --> used to search for a specified substring within a string and replace it with another substring.
10/22. CONCAT(string1,string2, .... ,stringN) -- used to combine two or more strings into a single string
11/12/23. ORDER BY --> used to sort the result set of a query by one or more columns, by default it is sorted in ascending order 
-- (ASC - ascending and DESC - descending)
13. IN (value1,value2, ...., valueN) -->  used to check whether a value matches any value within a specified list or subquery.
14. NOTIN(value1, value2, ..., valueN) --> used to filter records by excluding those that match any value within a specified list.
15/16/17/18. LIKE --> used to search for a specific pattern in a column. It is useful for filtering results based on partial matches rather than exact matches. The 'LIKE' operator is often used with wildcard characters to define the pattern to be matched.
'%' --> Represents zero or more characters.
'_' --> Represents a single character,

-- Q-8. Write an SQL query that fetches the unique values of DEPARTMENT from Worker table and prints its length.
select distinct department, LENGTH(department) from worker;
-- Q-9. Write an SQL query to print the FIRST_NAME from Worker table after replacing ‘a’ with ‘A’.
select REPLACE(first_name, 'a', 'A')  from worker;
-- Q-10. Write an SQL query to print the FIRST_NAME and LAST_NAME from Worker table into a single column COMPLETE_NAME.
-- A space char should separate them.
select CONCAT(first_name, ' ', last_name) AS COMPLETE_NAME from worker;
-- Q-11. Write an SQL query to print all Worker details from the Worker table order by FIRST_NAME Ascending.
select * from worker ORDER by first_name;
-- Q-12. Write an SQL query to print all Worker details from the Worker table order by FIRST_NAME Ascending and DEPARTMENT Descending.
select * from worker order by first_name, department DESC;
-- Q-13. Write an SQL query to print details for Workers with the first name as “Vipul” and “Satish” from Worker table.
select * from worker where first_name IN ('Vipul', 'Satish');
-- Q-14. Write an SQL query to print details of workers excluding first names, “Vipul” and “Satish” from Worker table.
select * from worker where first_name NOT IN ('Vipul', 'Satish');
-- Q-15. Write an SQL query to print details of Workers with DEPARTMENT name as “Admin*”.
select * from worker where department LIKE 'Admin%';
select * from worker where LEFT(department,5) = 'Admin';
select * from worker where SUBSTRING(department , 1, 5) ='Admin';
-- Q-16. Write an SQL query to print details of the Workers whose FIRST_NAME contains ‘a’.
select * from worker where first_name LIKE '%a%';
-- Q-17. Write an SQL query to print details of the Workers whose FIRST_NAME ends with ‘a’.
select * from worker where first_name LIKE '%a';
-- Q-18. Write an SQL query to print details of the Workers whose FIRST_NAME ends with ‘h’ and contains six alphabets.
select * from worker where first_name LIKE '_____h';
-- Q-19. Write an SQL query to print details of the Workers whose SALARY lies between 100000 and 500000.
select * from worker where salary between 100000 AND 500000;

20. 'DATE' --> used to handle and manipulate date and datetime values. These operations allow you to perfrom tasks such as extracting parts of a date, comparing dates, formatting dates, performing date arithematic.
SELECT order_id, DATE(order_datetime) AS order_date FROM orders; --> extracts the date part from the 'order_datetime' column.
SELECT YEAR(order_date) as order_year, MONTH(order_date) as order_month, DAY(order_date) as order_day FROM orders;
--> This query retrieves the year, month, and day from the 'order_date' column
SELECT * FROM employees WHERE hire_date > '2020-01-01'; --> COMPARING DATES
SELECT order_id, DATE_FORMAT (order_date,'%y-%m-%d') AS formated_Date; --> FORMATTING DATES
SELECT order_id, CONVERT_TZ(order_date, 'IST', 'America') as local_time FROM orders; --> Handling Time Zone
NOW() --> Returns the current date and time 
CURDATE() --> Returns the current date only
SELECT order_id, order_date, NOW() - order_date AS age_in_seconds FROM orders;
SELECT order_id, order_date FROM orders where order_date = CURDATE();

23. GROUP BY --> used to group rows that have the same values in specified columns. 
- SELECT product_id, SUM(sales_amount) AS total_sales FROM sales GROUP BY product_id; --> Total sales per Product.
- SELECT department, AVG(salary) AS average_salary FROM employees GROUP BY department; --> Average salary by department.
- SELECT job_title, MAX(salary) AS max_salary, MIN(salary) AS min_salary FROM employees GROUP BY job_title; --> Maximum and Minimum Salary by Job Title.
- SELECT department, COUNT(*) AS employee_count FROM employees GROUP BY department HAVING COUNT(*) > 5; --> Using 'GROUP BY' with 'HAVING'

21. COUNT() --> used to count the number of rows in a result set.
SELECT COUNT(DISTINCT department) AS distinct_departments FROM employees; --> Using COUNT with DISTINCT

-- Q-20. Write an SQL query to print details of the Workers who have joined in Feb’2014.
select * from worker where YEAR(joining_date) = 2014 AND MONTH(joining_date) = 02;
-- Q-21. Write an SQL query to fetch the count of employees working in the department ‘Admin’.
select count(*) from worker where department = 'Admin';
-- Q-22. Write an SQL query to fetch worker full names with salaries >= 50000 and <= 100000.
select concat(first_name, ' ', last_name) from worker
where salary between 50000 and 100000;
-- Q-23. Write an SQL query to fetch the no. of workers for each department in the descending order.
select department, count(worker_id) AS no_of_worker from worker group by department
ORDER BY no_of_worker desc;
-- Q-24. Write an SQL query to print details of the Workers who are also Managers.
select w.* from worker as w inner join title as t on w.worker_id = t.worker_ref_id where t.worker_title = 'Manager';
-- Q-25. Write an SQL query to fetch number (more than 1) of same titles in the ORG of different types.
select worker_title, count(*) as count from title group by worker_title having count > 1;
-- Q-26. Write an SQL query to show only odd rows from a table.
- select * from worker where MOD (WORKER_ID, 2) != 0; 
- select * from worker where MOD (WORKER_ID, 2) <> 0;
-- Q-27. Write an SQL query to show only even rows from a table. 
select * from worker where MOD (WORKER_ID, 2) = 0;
-- Q-28. Write an SQL query to clone a new table from another table.
CREATE TABLE worker_clone LIKE worker;
INSERT INTO worker_clone select * from worker;
select * from worker_clone;
-- Q-29. Write an SQL query to fetch intersecting records of two tables.
select worker.* from worker inner join worker_clone using(worker_id);
-- Q-30. Write an SQL query to show records from one table that another table does not have.
-- MINUS
select worker.* from worker left join worker_clone using(worker_id) WHERE worker_clone.worker_id is NULL;
-- Q-31. Write an SQL query to show the current date and time.
-- DUAL
select curdate();
select now();

32.  LIMIT --> used when we want to retrive a specific number of rows from a query.
- SELECT * FROM employees LIMIT 10 OFFSET 20;
--> This query returns 10 rows starting from the 21st row (since OFFSET is zero-based).

-- Q-32. Write an SQL query to show the top n (say 5) records of a table order by descending salary.
select * from worker order by salary desc LIMIT 5;
-- Q-33. Write an SQL query to determine the nth (say n=5) highest salary from a table.
select * from worker order by salary desc LIMIT 4,1;
-- Q-34. Write an SQL query to determine the 5th highest salary without using LIMIT keyword.
-- select salary from worker w1
-- WHERE 4 = (
-- SELECT COUNT(DISTINCT (w2.salary))
-- from worker w2
-- where w2.salary >= w1.salary
-- );
SELECT salary
FROM (
    SELECT salary, RANK() OVER (ORDER BY salary DESC) AS rank
    FROM employees
) AS ranked_salaries
WHERE rank = 5;
 
-- Q-35. Write an SQL query to fetch the list of employees with the same salary.
select w1.* from worker w1, worker w2 where w1.salary = w2.salary and w1.worker_id != w2.worker_id;
-- Q-36. Write an SQL query to show the second highest salary from a table using sub-query.
select max(salary) from worker
where salary not in (select max(salary) from worker);
37. UNION - The UNION keyword in SQL is used to combine the result sets of two or more SELECT statements into a single result set. The UNION operator removes duplicate rows from the result set, whereas UNION ALL includes all rows, including duplicates.
-- Q-37. Write an SQL query to show one row twice in results from a table.
select * from worker
UNION ALL
select * from worker ORDER BY worker_id;
-- Q-38. Write an SQL query to list worker_id who does not get bonus.
select worker_id from worker where worker_id not in (select worker_ref_id from bonus);
-- Q-39. Write an SQL query to fetch the first 50% records from a table.
select * from worker where worker_id <= ( select count(worker_id)/2 from worker);
-- Q-40. Write an SQL query to fetch the departments that have less than 4 people in it.
select department, count(department) as depCount from worker group by department having depCount < 4;
-- Q-41. Write an SQL query to show all departments along with the number of people in there.
select department, count(department) as depCount from worker group by department;
-- Q-42. Write an SQL query to show the last record from a table.
select * from worker where worker_id = (select max(worker_id) from worker);
-- Q-43. Write an SQL query to fetch the first row of a table.
select * from worker where worker_id = (select min(worker_id) from worker);
-- Q-44. Write an SQL query to fetch the last five records from a table.
(select * from worker order by worker_id desc limit 5) order by worker_id;
-- Q-45. Write an SQL query to print the name of employees having the highest salary in each department.
select w.department, w.first_name, w.salary from
 (select max(salary) as maxsal, department from worker group by department) temp
inner join worker w on temp.department = w.department and temp.maxsal = w.salary;
-- Q-46. Write an SQL query to fetch three max salaries from a table using co-related subquery
select distinct salary from worker w1
where 3 >= (select count(distinct salary) from worker w2 where w1.salary <= w2.salary) order by w1.salary desc;
-- DRY RUN AFTER REVISING THE CORELATED SUBQUERY CONCEPT FROM LEC-9.
select distinct salary from worker order by salary desc limit 3;
-- Q-47. Write an SQL query to fetch three min salaries from a table using co-related subquery
select distinct salary from worker w1
where 3 >= (select count(distinct salary) from worker w2 where w1.salary >= w2.salary) order by w1.salary desc;
-- Q-48. Write an SQL query to fetch nth max salaries from a table.
select distinct salary from worker w1
where n >= (select count(distinct salary) from worker w2 where w1.salary <= w2.salary) order by w1.salary desc;
-- Q-49. Write an SQL query to fetch departments along with the total salaries paid for each of them.
select department , sum(salary) as depSal from worker group by department order by depSal desc;
-- Q-50. Write an SQL query to fetch the names of workers who earn the highest salary.
select first_name, salary from worker where salary = (select max(Salary) from worker);
-- Q-51. Query the two cities in STATION with the shortest and longest CITY names, as well as their respective lengths (i.e.: number of characters in the name). If there is more than one smallest or largest city, choose the one that comes first when ordered alphabetically.
SELECT CITY, length(CITY) FROM STATION ORDER BY length(CITY), CITY limit 1;
SELECT CITY, length(CITY) FROM STATION ORDER BY length(CITY) desc, CITY limit 1;
-- Q-52. Query a list of CITY names from STATION for cities that have an even ID number. Print the results in any order, but exclude duplicates from the answer.
SELECT distinct city FROM station WHERE id % 2=0;
-- length(column_name) => Provides length of entries in a column. for eg: For an entry ‘INDIA’ under column name COUNTRY, length(COUNTRY) will give 5 as the result value.
-- order by column_name=> sort the value in ascending or descending order. By default sorting is done in ascending order.
-- limit n=> limits the total observation up to n. for e.g: limit 10 will have 10 observations starting from the top.
-- Q-53. Query the list of CITY names starting with vowels (i.e., a, e, i, o, or u) from STATION.
- SELECT distinct city FROM station WHERE lower(substr(city,1,1))  in ('a', 'e', 'i', 'o', 'u');
- SELECT distinct city FROM station WHERE substr(city,1,1) in ('A', 'E', 'I', 'O', 'U');
-- Q54. Query the list of CITY names ending with vowels (a, e, i, o, u) from STATION. our result cannot contain duplicates.
- SELECT DISTINCT CITY FROM STATION WHERE CITY (LIKE '%A' OR CITY LIKE '%E' OR LIKE '%I' LIKE '%O' OR LIKE '%U') ORDER BY CITY;
- SELECT distinct city FROM station WHERE substr(city,length(city),1) in ('a','e','u','o','i') ORDER BY city;
