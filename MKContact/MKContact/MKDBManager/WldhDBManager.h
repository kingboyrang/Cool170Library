//
//  WldhDBManager.h
//  WldhDBManager
//
//  Created by mini1 on 14-5-12.
//  Copyright (c) 2014年 Guoling. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FMDB.h"

@interface WldhDBManager : NSObject
{
    FMDatabaseQueue  *_userDBQueue;
    FMDatabaseQueue  *_globalDBQueue;
}

@property(nonatomic,strong) FMDatabaseQueue *userDBQueue;
@property(nonatomic,strong) FMDatabaseQueue *globalDBQueue;

+ (WldhDBManager *)shareInstance;

/*********************************************************************
 函数名称 : createUserDatabase
 函数描述 : 创建用户数据库，生成所有的表
 参数 :
 userID : 用户ID
 返回值 : 成功/失败
 作者 : 
 *********************************************************************/
- (BOOL)createUserDatabase:(NSString *)userID;

/*********************************************************************
 函数名称 : createGloabDatabase
 函数描述 : 创建全局数据库，生成所有的表
 返回值 : 成功/失败
 作者 : 
 *********************************************************************/
- (BOOL)createGloabDatabase;

/*********************************************************************
 函数名称 : updataUserDBWithSql
 函数描述 : 执行创建、删除、新增、更新数据库操作
 参数 :
 sql : 数据库执行语句
 返回值 : 成功/失败
 作者 : 
 *********************************************************************/
- (BOOL)updataUserDBWithSql:(NSString *)sql, ...;

/*********************************************************************
 函数名称 : transactionUpdataUserDBWithSqlArray
 函数描述 : 执行多条创建、删除、新增、更新数据库操作
 参数 :
 sql : 数据库执行语句
 返回值 : 成功/失败
 作者 : 
 *********************************************************************/
- (BOOL)transactionUpdataUserDBWithSqlArray:(NSArray *)sqlArray;

/*********************************************************************
 函数名称 : queryUserDBWithSql
 函数描述 : 查询数据库返回结果集
 参数 :
 sql : 数据库执行语句
 返回值 : 查询结果集合
 作者 : 
 *********************************************************************/
- (NSArray *)queryUserDBWithSql:(NSString*)sql, ... ;

/*********************************************************************
 函数名称 : updataGlobalDBWithSql
 函数描述 : 执行创建、删除、新增、更新数据库操作
 参数 :
 sql : 数据库执行语句
 返回值 : 成功/失败
 作者 : 
 *********************************************************************/
- (BOOL)updataGlobalDBWithSql:(NSString *)sql, ...;

/*********************************************************************
 函数名称 : transactionUpdataGlobalDBWithSqlArray
 函数描述 : 执行多条创建、删除、新增、更新数据库操作
 参数 :
 sql : 数据库执行语句
 返回值 : 成功/失败
 作者 : 
 *********************************************************************/
- (BOOL)transactionUpdataGlobalDBWithSqlArray:(NSArray *)sqlArray;

/*********************************************************************
 函数名称 : queryGlobalDBWithSql
 函数描述 : 查询数据库返回结果集
 参数 :
 sql : 数据库执行语句
 返回值 : 查询结果集合
 作者 : 
 *********************************************************************/
- (NSArray *)queryGlobalDBWithSql:(NSString*)sql, ... ;

@end
