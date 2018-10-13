# py_call_c_for_str

gcc c_dll.c -shared -o c_dll.so
=======
reverse str
=======
file list

run.py
cpp_dll.c
cpp_dll.so


char *reverse(char *s)
{
    char t, *p = s, *q = (s + (strlen(s)-1));

    while (s && (p < q)) {
        t = *p;
        *p++ = *q;
        *q-- = t;
    }

    return s;
}




