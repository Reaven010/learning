from sklearn.feature_extraction.text import CountVectorizer, TfidfVectorizer
documents = [
    "I love programming in Python",
    "Python is a great programming language",
    "I enjoy solving problems with Python"
]
count_vectorizer = CountVectorizer()
count_matrix = count_vectorizer.fit_transform(documents)
print("Count Vectorizer Matrix:\n", count_matrix.toarray())