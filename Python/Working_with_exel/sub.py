import openpyxl as exal
full_file = exal.load_workbook(r'D:\All_Codes\Python\Working_with_exel\transections.xlsx')
page_one = full_file['Sheet1']

new = page_one.cell(4,4)



print(new.value)