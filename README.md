# Python-C
* Compiling
```sh
gcc -shared -o main.so main.cpp

* Executing
```python
>>> import ctypes
>>> so = ctypes.CDLL("./main.so")
>>> so.Greet()
Hello World
>>>
```
