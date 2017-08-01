import sequtils, tables

proc toRna* (str: string): string =
    let dictionary = {"G": "C", "C": "G", "T": "A", "A": "U"}.toTable
    let nucleotides = toSeq(str.items)
    # If `nucleotides` contain any wrong DNA nucleotide, stop
    if any(nucleotides, proc (c: char): bool = return (not dictionary.hasKey($c))):
        raise newException(ValueError, "invalid nucleotide")
    let transcription = map(nucleotides, proc(c: char): string = return dictionary[$c])
    # Join characters
    result = foldl(transcription, a & b, "")