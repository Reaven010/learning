import sklearn as sk
import numpy as np
data=np.array([
    [1,2,np.nan],
    [3,np.nan,5],
    [np.nan,5,6]
])
print("Original Data:\n", data)

imputer=sk.impute.SimpleImputer(strategy="mean")
imputed_data=imputer.fit_transform(data)
print("Imputed Data:\n", imputed_data)

# KNN Imputer
data_knn=np.array([
    [1,2,np.nan],
    [3,np.nan,5],
    [np.nan,5,6],
    [9,8,7]
])
print("Original Data for KNN Imputer:\n", data_knn)
knn_imputer=sk.impute.KNNImputer(n_neighbors=2)
knn_imputed_data=knn_imputer.fit_transform(data_knn)
print("KNN Imputed Data:\n", knn_imputed_data)
