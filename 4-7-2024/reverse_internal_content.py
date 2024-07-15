
sentence = input("enter a sentence: ")
words = sentence.split()
rev_words = [word[::-1]for word in words]
rev_sent = ' '.join(rev_words)
print(rev_sent)