import matplotlib.pyplot as py
import numpy as np

while run :
    print("""1.Add Student info!
             2.Remove Student info.
             3.View Student IDs.
             4.View info on Graph""")
    choice= input("Enter your choice: ")
    run = False


student_id = input("Enter Student ID: ")
student_cgpa = input("Enter Student's cgpa: ")

x_exis = np.array([student_id])