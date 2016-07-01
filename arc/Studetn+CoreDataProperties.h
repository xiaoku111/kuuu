//
//  Studetn+CoreDataProperties.h
//  arc
//
//  Created by qianfeng on 16/6/29.
//  Copyright © 2016年 qianfeng. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Studetn.h"

NS_ASSUME_NONNULL_BEGIN

@interface Studetn (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSManagedObject *per;

@end

NS_ASSUME_NONNULL_END
