#coding=utf-8 
import ctypes 
from ctypes import *   
ll = ctypes.cdll.LoadLibrary  
 
lib = ll("./cpp_dll.so")  
str='abcdefg'
print(str)
print("len=>",len(str))
print("====")
p=c_wchar_p(str)

rst=lib.reverse(p,len(str))
print("====")
print(p.value)
