//
//  GyundongCanshuModel.h
//  OneTheBike
//
//  Created by gaomeng on 14/10/22.
//  Copyright (c) 2014年 szk. All rights reserved.
//

//运动参数model

#import <Foundation/Foundation.h>

@interface GyundongCanshuModel : NSObject



@property(nonatomic,assign)double podu;//坡度
@property(nonatomic,assign)double pashenglv;//爬升率
@property(nonatomic,assign)int bpm;//卡路里
@property(nonatomic,assign)int xinlv;//心率

@property(nonatomic,assign)CGFloat  juli;//距离 单位公里
@property(nonatomic,assign)CGFloat  dangqiansudu;//当前速度 定位返回对象的属性
@property(nonatomic,assign)CGFloat pingjunsudu;//平均速度
@property(nonatomic,assign)CGFloat maxSudu;//最高速度
@property(nonatomic,strong)NSString* peisu;//配速//跑完一公里需要的时间


@property(nonatomic,strong)NSString *startTime;//开始时间
@property(nonatomic,strong)NSString *endTime;//结束时间
@property(nonatomic,strong)NSString *yongshi;//用时

@property(nonatomic,assign)int startHaiba;//开始海拔
@property(nonatomic,assign)int maxHaiba;//最高海拔
@property(nonatomic,assign)int minHaiba;//最低海拔
@property(nonatomic,assign)int haiba;//实时海拔 完成骑行之后这个参数为终点海拔
@property(nonatomic,assign)int haibaUp;//海拔下降
@property(nonatomic,assign)int haibaDown;//海拔下降

@property(nonatomic,strong)NSString *serverRoadId;//保存本地时候的一个时间戳 上传完成时候存的是服务器返回的id 用于在历史界面的删除

@property(nonatomic,assign)NSInteger localId;//本地id



@property(nonatomic,strong)NSString *startCoorStr;//开始时候的经纬度  用逗号隔开
@property(nonatomic,strong)NSString *coorStr;//实时经纬度 定位结束后为终点经纬度

@property(nonatomic,strong)NSString *jsonStr;//轨迹
@property(nonatomic,assign)BOOL isUpLoad;//是否上传


@property(nonatomic,assign)MAUserLocation *userLocation;//用户定位信息

@property(nonatomic,assign)BOOL time;

@property(nonatomic,assign)NSInteger yongshiMiao;


//计时器label
@property(nonatomic,strong)UILabel *timeRunLabel;

//本地时间label
@property(nonatomic,strong)UILabel *localTimeLabel;


//清空所有数据
-(void)cleanAllData;


-(id)init;

@end
