import algorithm, sequtils, strutils

proc detectAnagrams* (word: string, anagrams: seq[string]): seq[string] =
    result = @[]
    let lower_word = word.toLowerAscii()
    var word_chars = toSeq(lower_word.items)
    sort(word_chars, system.cmp)
    for anagram in anagrams:
        let lower_anagram = anagram.toLowerAscii()
        if lower_anagram == lower_word:
            continue
        var anagram_chars = toSeq(anagram.toLowerAscii().items)
        sort(anagram_chars, system.cmp)
        if word_chars == anagram_chars:
            result.add(anagram)