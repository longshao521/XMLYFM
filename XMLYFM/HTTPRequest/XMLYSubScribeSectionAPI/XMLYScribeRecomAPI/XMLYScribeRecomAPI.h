//
//  XMLYScribeRecomAPI.h
//  XMLYFM
//
//  Created by East_wu on 16/9/9.
//  Copyright © 2016年 East_wu. All rights reserved.
//

#import "XMLYBaseAPI.h"

@interface XMLYScribeRecomAPI : XMLYBaseAPI

+ (void)requestScribeRecomData:(NSInteger)page completion:(XMLYBaseAPICompletion)completion;

@end
