import pandas as pd
import numpy as np 
from sklearn.model_selection import StratifiedShuffleSplit
from sklearn.ensemble import RandomForestRegressor
from sklearn.pipeline import Pipeline
from sklearn.preprocessing import StandardScaler
from sklearn.impute import SimpleImputer
from sklearn.metrics import mean_squared_error
from sklearn.model_selection import cross_val_score


housing = pd.read_csv("data.csv")

split = StratifiedShuffleSplit(n_splits=1, test_size=0.2, random_state=42)
for train_index, test_index in split.split(housing, housing['CHAS']):
    strat_train_set = housing.loc[train_index]
    strat_test_set = housing.loc[test_index]

housing = strat_train_set.drop("MEDV", axis=1)
housing_labels = strat_train_set["MEDV"].copy()

my_pipeline = Pipeline([
    ('imputer', SimpleImputer(strategy = "median")),
    ('std_scaler', StandardScaler()),

])

housing_new = my_pipeline.fit_transform(housing) 

model = RandomForestRegressor()
model.fit(housing_new, housing_labels)

some_data = housing.iloc[:5]
some_labels = housing_labels.iloc[:5]
prepared_data = my_pipeline.transform(some_data)

#print(model.predict(prepared_data))
#print(list(some_labels))

housing_predictions = model.predict(housing_new)
mse = mean_squared_error(housing_labels, housing_predictions)
rmse = np.sqrt(mse)

print(rmse)


score = cross_val_score(model, housing_new, housing_labels, scoring = "neg_mean_squared_error", cv = 10)
rmse_scores = np.sqrt(-score)

def print_scores(rmse_scores):
    print("Scores", score, "\n")
    print("mean", score.mean(), "\n")
    print("Standard Deviation", score.std(), "\n")
   
print(print_scores(rmse_scores))



