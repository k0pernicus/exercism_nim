import math, sequtils

type TriangleType* = enum
    tkEquilateral, tkIsosceles, tkScalene

proc kind* (a, b, c: float64): TriangleType =
    if any(@[a, b, c], proc(x: float64): bool = return x <= 0 or x.classify == fcNaN):
        raise newException(ValueError, "each side must be valid, and greater of equals to 0")
    if a + b < c or a + c < b or b + c < a:
        raise newException(ValueError, "triangle inequality")
    if a == b  and b == c:
        result = tkEquilateral
    elif a == b or a == c or b == c:
        result = tkIsosceles
    else:
        result = tkScalene