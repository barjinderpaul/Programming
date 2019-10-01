

#translator :
#corpora (dictionary) :
#----------------
"""
all vowels are converted to z :
dog -> dzg
cat -> czt
"""

def translator(word):
    return_word=""
    for ch in word:
        if ch.lower() in "aeiou":
            if ch.isupper():
                return_word=return_word+"Z"
            else:
                return_word = return_word+"z"
        else:
            return_word = return_word + ch
    return return_word

print(translator(input("Enter a word to translate :) ")))
