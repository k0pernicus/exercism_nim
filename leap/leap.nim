proc isLeapYear*(year: int): bool =
    return ((year mod 4 == 0) and not (year mod 100 == 0)) or (year mod 400 == 0)