import strutils

proc convert* (nb: int): string =
    result = ""
    if (nb mod 3) == 0:
        result.add("Pling")
    if (nb mod 5) == 0:
        result.add("Plang")
    if (nb mod 7) == 0:
        result.add("Plong")
    if result.len == 0:
        result = intToStr(nb)
