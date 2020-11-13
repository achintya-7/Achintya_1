from sklearn import datasets
from sklearn.neighbors import KNeighborsClassifier

# Descripton of data
#        - sepal length in cm
#        - sepal width in cm
#        - petal length in cm
#        - petal width in cm
#        - class:
#          - Iris-Setosa
#          - Iris-Versicolour
#          - Iris-Virginica

# LOADING DATASET
iris = datasets.load_iris()
# print(iris.DESCR)

# ASSIGNING AND PRINTING FEATURES AND LABELS
features = iris.data
labels = iris.target
# print(features[0], labels[0])


# TRAINING THE CLASSIFIERS
clf = KNeighborsClassifier()

# all classifiers generally have a fitting command, clf.fit is used to the features and labels
clf.fit(features, labels)

# here you can write the numerical value about the flower in the predict function. The values should correspond to the
# description as mentioned above in the code.
predo = clf.predict([[1, 2, 5, 0]])
print(predo)
print(" 1 = Iris-Setosa \n 2 = Iris-Versicolour \n 3 = Iris-Virginica")
