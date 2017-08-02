import math, sequtils

proc square_of_sum*(nb: int): int =
    let nb_range = 1..nb
    result = int(foldl(nb_range, a + float(b), 0.0).pow(2))

proc sum_of_squares*(nb: int): int =
    let nb_range = 1..nb
    result = int(foldl(nb_range, a + float(b).pow(2), 0.0))

proc difference*(nb: int): int =
    result = square_of_sum(nb) - sum_of_squares(nb)