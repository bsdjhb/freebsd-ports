PORTNAME=	django-bootstrap-pagination
DISTVERSION=	1.7.1
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Bootstrap pagination for django
WWW=		https://pypi.org/project/django-bootstrap-pagination/

LICENSE=	MIT

DEPRECATED=	not compatible with Django 4.2, upstream no longer maintained.
EXPIRATION_DATE=2024-06-30

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django32>=1.7.0:www/py-django32@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
