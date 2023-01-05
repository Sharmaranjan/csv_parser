from ctypes import *
import subprocess

dll = CDLL("./libshared_mem.so")
subprocess.Popen('./C_Code.out')

# fetch flag
val_updated_flag = c_int.in_dll(dll,'val_updated_flag')
while(val_updated_flag.value == 0):
    val_updated_flag = c_int.in_dll(dll,'val_updated_flag')

# once updated fetch and print distance
total_dist_fromcpp = c_int.in_dll(dll,'total_dist_fromcpp')
print('\n\n****************FROM PYTHON************************************\n')
print('Total Distance covered : ' + str(total_dist_fromcpp.value) + ' KM\n')


