#include <iostream>
using namespace std;

class Recommender {
public:
    virtual double generateRecommendation(int userRating, int popularity) { return 0; }
    virtual ~Recommender() {}
};
class PersonalizedRecommender : public Recommender {
public:
    double generateRecommendation(int userRating, int popularity) {
        return 0.7 * userRating + 0.3 * popularity;
    }
};
class TrendingRecommender : public Recommender {
public:
    double generateRecommendation(int userRating, int popularity) {
        return 0.3 * userRating + 0.7 * popularity;
    }
};

int main() {
    Recommender *r1 = new PersonalizedRecommender();
    Recommender *r2 = new TrendingRecommender();
    cout << "Personalized score: " << r1->generateRecommendation(80, 60) << endl;
    cout << "Trending score: " << r2->generateRecommendation(80, 60) << endl;
    delete r1;
    delete r2;
}
