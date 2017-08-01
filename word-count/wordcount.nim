import sequtils, strutils, critbits

type TWordCount* = CritBitTree[int]

proc wordCount*(sentence: string): TWordCount =
    let separators=AllChars - Letters - Digits
    # Split words
    var words = sentence.split(separators)
    # Get ASCII alpha characters (letters U digits)
    words = words.filter(proc(word: string): bool = word.contains(Letters + Digits))
    # Initialize the data structure
    for word in words:
        let lower_word = word.toLowerAscii()
        if result.hasKey(lower_word):
            result.inc(lower_word)
            continue
        result[lower_word] = 1