//
// Created by Rodrigo on 11/06/2018.
//

#ifndef OOAED_1_UTILS_H
#define OOAED_1_UTILS_H

template <typename TT, typename... T>
std::unique_ptr<TT> make_unique(T&&... t)
{
    return std::unique_ptr<TT>{new TT{std::forward<T>(t)...}};
}


template <typename T>
bool compare_pointer(const T & p1, const T & p2){
    return *p1==*p2;
}

template <typename pT, typename T, typename... TT>
void emplace_unique_ptr(T & container, TT&&... t){
    container.emplace_back(make_unique<pT>(std::forward<TT>(t)...));
};

template <typename key_t,typename pT, typename T, typename... TT>
void map_emplace_unique_ptr(T & container,key_t && key, TT&&... t){
    container.emplace(std::make_pair<key_t,std::unique_ptr<pT>>(std::forward<key_t>(key),make_unique<pT>(std::forward<TT>(t)...)));
};

#endif //OOAED_1_UTILS_H
