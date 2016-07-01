//
//  Person+CoreDataProperties.h
//  arc
//
//  Created by qianfeng on 16/6/29.
//  Copyright © 2016年 qianfeng. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Person (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSSet<Studetn *> *stu;

@end

@interface Person (CoreDataGeneratedAccessors)

- (void)addStuObject:(Studetn *)value;
- (void)removeStuObject:(Studetn *)value;
- (void)addStu:(NSSet<Studetn *> *)values;
- (void)removeStu:(NSSet<Studetn *> *)values;

@end

NS_ASSUME_NONNULL_END
