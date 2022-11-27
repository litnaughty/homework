-- auto-generated definition
create table question_batch
(
    ID          int(20) auto_increment comment '批次号'
        primary key,
    TITLE       varchar(500) null comment '问卷标题',
    REAMRK      varchar(500) null comment '说明',
    CREATE_TIME timestamp(6) null comment '创建时间',
    CREATE_ID   int(20)      null comment '创建人ID',
    UPDATE_TIME timestamp(6) null comment '更新时间',
    UPDATE_ID   int(20)      null comment '更新人ID',
    constraint QUESTIONNAIRE_BATCH_ID_uindex
        unique (ID)
)
    comment '问卷批次表';

-- auto-generated definition
create table question_detail
(
    ID         int(20) auto_increment comment '明细ID'
        primary key,
    BATCH_ID   int(20)       not null comment '批次ID',
    TOPIC_TYPE int(5)        not null comment '题目类型(1:选择题;2:填空题;3:是非题)',
    TOPIC      varchar(2000) not null comment '题目',
    RESULT     varchar(2000) null comment '作答结果',
    constraint question_detail_ID_uindex
        unique (ID)
)
    comment '问卷明细';

-- auto-generated definition
create table question_enum
(
    ID           int(20) auto_increment comment '选项ID'
        primary key,
    BATCH_ID     int(20)       not null comment '批次号',
    DETAIL_ID    int(20)       not null comment '问卷明细ID',
    OPTION_CODE  varchar(5)    not null comment '选项编码',
    OPTION_VALUE varchar(500)  null comment '选项值',
    REMARK       varchar(1000) null comment '说明',
    constraint question_enum_ID_uindex
        unique (ID)
)
    comment '问卷选择项枚举';

-- auto-generated definition
create table qr_code_set
(
    ID      int(32) auto_increment comment 'ID'
        primary key,
    URL     varchar(500)        not null comment '跳转地址',
    HEIGHT  int(10) default 350 null comment '二维码高度',
    WIDE    int(10) default 350 null comment '二维码宽度',
    PICTRUE varchar(500)        null comment '图片',
    constraint QR_CODE_SET_id_uindex
        unique (ID)
)
    comment '二维码设置相关';

