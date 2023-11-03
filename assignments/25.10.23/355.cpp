class Twitter {
public:
    unordered_map<int,unordered_map<int,int>> followerList;
    vector<pair<int,int>> post;

    void postTweet(int userId, int tweetId) {
        post.push_back({userId,tweetId});    
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> feed;
        int i=post.size()-1,count=10;
        while(i>=0 && count>0){
            if(post[i].first==userId || followerList[userId][post[i].first]){
                feed.push_back(post[i].second);
                count--;
            }
            i--;
        }
        return feed;
    }
    
    void follow(int followerId, int followedId) {
        followerList[followerId][followedId]=1;
    }
    
    void unfollow(int followerId, int followedId) {
        followerList[followerId][followedId]=0;
    }
};