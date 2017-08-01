import sequtils
import strutils

proc containsAlphaCharacters(sentence: string): bool =
    return sentence.contains(Letters)

proc hey*(sentence: string): string =
    var sentence = sentence.strip()
    if sentence == "":
        result = "Fine. Be that way!"
    elif sentence.containsAlphaCharacters() and sentence == sentence.toUpperAscii():
        result = "Whoa, chill out!"
    elif sentence.endsWith('?'):
        result = "Sure."
    else:
        result = "Whatever."