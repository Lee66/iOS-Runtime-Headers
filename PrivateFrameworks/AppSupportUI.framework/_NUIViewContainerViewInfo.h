/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

@interface _NUIViewContainerViewInfo : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _customAlignmentInsets;
    double  _customBottomBaseline;
    double  _customTopBaseline;
    struct { 
        unsigned int baselineRelativeInsets : 1; 
        unsigned int allowFastBaselines : 1; 
        unsigned int alsoInvalidateSuperview : 1; 
        unsigned int neverCacheSize : 1; 
    }  _flags;
    struct nui_size_cache { 
        struct __tree<std::__1::__value_type<CGSize, CGSize>, std::__1::__map_value_compare<CGSize, std::__1::__value_type<CGSize, CGSize>, std::__1::less<CGSize>, true>, std::__1::allocator<std::__1::__value_type<CGSize, CGSize> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<CGSize, CGSize>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<CGSize, std::__1::__value_type<CGSize, CGSize>, std::__1::less<CGSize>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _sizeCache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end