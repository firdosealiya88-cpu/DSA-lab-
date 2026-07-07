EXERCISE 1
Import, explore, and summarize CSV data in Excel using sorting, filtering, and tabular summaries
Objective
To import CSV data into Excel and generate structured summaries for analysis.
Procedure
Step 1: Import CSV Data into Excel
Open Microsoft Excel.
Click the Data tab in the ribbon.
Select Get Data → From Text/CSV.
Browse and select the CSV file (for example, Superstore.csv).
Click Import, then choose Load.
The dataset will appear in a new worksheet with columns such as Order ID, Product, Category, Region, Sales, Quantity, etc.
Step 2: Identify Column Names and Data Types
Look at the header row (first row).
Verify that column names such as Region, Category, Product Name, Sales are correctly displayed.
Check the data type of each column:
	Text fields → Product Name, Category, Region
	Numeric fields → Sales, Quantity
	Date fields → Order Date
Correct data types are necessary for accurate sorting, filtering, and calculations.
Step 3: Sort the Sales Column
Click anywhere inside the Sales column.
Go to Data → Sort Largest to Smallest.
This rearranges the rows so that the highest sales appear at the top and the lowest at the bottom.
Sorting helps to quickly identify top-selling and low-selling products.
Step 4: Apply Filters on Region and Product
Select any cell in the dataset.
Click Data → Filter.
Drop-down arrows will appear in each column header.

Click the filter in Region:
	Select only West, South, or any region you want.
Click the filter in Product Name or Category:
	Select specific products or categories.


Now Excel displays only the records that match the selected criteria.
Step 5: Convert Data into a Structured Table
Select any cell in the data.
Press Ctrl + T.
Ensure “My table has headers” is checked.
Click OK.
The dataset becomes an Excel Table.
This ensures Excel always recognizes the full dataset for Pivot Tables and analysis.
Step 6: Create Pivot Table – Total Sales by Category and Region
Click anywhere inside the table.
Go to Insert → PivotTable.
Choose New Worksheet and click OK.
In the Pivot Table Fields panel:
	Drag Category → Rows
	Drag Region → Columns
	Drag Sales → Values
If it shows Count of Sales, click it → Value Field Settings → Sum → OK.














Expected Output
• Filtered data   
a 


Pivot table summarizing sales
 

	Sort the Sales Column
 
Total Sales by Category and Region
 
Result
The CSV dataset is imported, cleaned, and summarized effectively using Excel tools.
