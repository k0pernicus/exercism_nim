import sequtils, tables

type CountNucleotide = CountTable[char]

proc count_nucleotides(s: string): CountNucleotide =
    let nucleotides = {'A', 'C', 'G', 'T'}
    let s_nucleotides = toSeq(s.items)
    if any(s_nucleotides, proc(c: char): bool = return not (c in nucleotides)):
        raise newException(ValueError, "not accepted nucleotides!")
    result = initCountTable[char](4)
    for n in s_nucleotides:
        if result.hasKey(n):
            result.inc(n)
            continue
        result[n] = 1

proc count* (c: char, s: string): int =
    let s_nucleotides = count_nucleotides(s)
    if s_nucleotides.hasKey(c):
        result = s_nucleotides[c]
    else:
        result = 0

proc count_dna* (s: string): CountNucleotide =
    result = count_nucleotides(s)
