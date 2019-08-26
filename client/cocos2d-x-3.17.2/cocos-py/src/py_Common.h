#ifndef PY_COMMON_H
#define PY_COMMON_H

#include <stddef.h>
#include <stdio.h>

#include <Python.h>

#include "cocos2d.h"
#include "py_Tracelog.h"

USING_NS_CC;

/* PyArg_ParseTuple    @see getargs.c or https://docs.python.org/3.7/howto/clinic.html?highlight=pyarg_parsetuple
'B'     unsigned_char(bitwise=True)
'b'     unsigned_char
'c'     char
'C'     int(accept={str})
'd'     double
'D'     Py_complex
'es'    str(encoding='name_of_encoding')
'es#'   str(encoding='name_of_encoding', zeroes=True)
'et'    str(encoding='name_of_encoding', accept={bytes, bytearray, str})
'et#'   str(encoding='name_of_encoding', accept={bytes, bytearray, str}, zeroes=True)
'f'     float
'h'     short
'H'     unsigned_short(bitwise=True)
'i'     int
'I'     unsigned_int(bitwise=True)
'k'     unsigned_long(bitwise=True)
'K'     unsigned_long_long(bitwise=True)
'l'     long
'L'     long long
'n'     Py_ssize_t
'O'     object
'O!'    object(subclass_of='&PySomething_Type')
'O&'    object(converter='name_of_c_function')
'p'     bool  (NOTE:for  the argument must be a (pointer to) int, not the C99 bool type)
'S'     PyBytesObject
's'     str
's#'    str(zeroes=True)
's*'    Py_buffer(accept={buffer, str})
'U'     unicode
'u'     Py_UNICODE
'u#'    Py_UNICODE(zeroes=True)
'w*'    Py_buffer(accept={rwbuffer})
'Y'     PyByteArrayObject
'y'     str(accept={bytes})
'y#'    str(accept={robuffer}, zeroes=True)
'y*'    Py_buffer
'Z'     Py_UNICODE(accept={str, NoneType})
'Z#'    Py_UNICODE(accept={str, NoneType}, zeroes=True)
'z'     str(accept={str, NoneType})
'z#'    str(accept={str, NoneType}, zeroes=True)
'z*'    Py_buffer(accept={buffer, str, NoneType})
*/


#endif